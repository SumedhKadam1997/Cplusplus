//#include <iostream>
//#include <string>
//using namespace std::string_literals;
//// Header// Interface
//class IDataSource {
//public:
//    virtual std::string readLine() = 0;
//    virtual ~IDataSource(){};
//};
//// no in the header
//class DummyDataSource: public IDataSource {
//public:
//    ~DummyDataSource() = default;
//    std::string readLine() {
//        return "foo"s;
//    }
//};
//// Header
//class FailingDataSource: public IDataSource {
//public:
//    ~FailingDataSource() = default;
//    std::string readLine() {
//        return "foo asdasd"s;
//    }
//};

//class Parser {
//public:
//    Parser(IDataSource *dataSource)
//        : dataSource_ { dataSource }{}
//    ~Parser() {
//        delete dataSource_;
//    }
//    void setDataSource(IDataSource *dataSource) {
//        if (dataSource_)
//            delete dataSource_;
//        dataSource_ = dataSource;
//    }
//    bool parse() {
//        auto data = dataSource_->readLine();
//        return data == "foo"s;
//    }
//private:
//    IDataSource *dataSource_;
//};

//int main() {
////    DummyDataSource *dataSource = new DummyDataSource();
//    FailingDataSource *dataSource = new FailingDataSource();
//    Parser parser(dataSource);
//    std::cout << "parser one " << parser.parse() << std::endl;
////    parser.setDataSource(new FailingDataSource());
//    std::cout << "parser two " << parser.parse() << std::endl;
//    return 0;
//}
