import XCTest
import TryOCToSwift

final class TryOCToSwiftTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}

extension SKMission {
    func save(to url: URL) throws -> Bool {
        var wasDirty:ObjCBool = false
        try self.__save(to: url, wasDirty: &wasDirty)
        var error:NSError? = NSError()
        self.save(to: url, error: &error)
        return wasDirty.boolValue
    }
}
