// swift-tools-version:5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Judo3DS2_iOS",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "Judo3DS2_iOS",
            targets: ["Judo3DS2_iOSTarget"])
    ],
    dependencies: [
    ],
    targets: [
        .target(
            name: "Judo3DS2_iOSTarget",
            dependencies: [
                .target(name: "Judo3DS2_iOS")
            ],
            path: "Sources"),
        .binaryTarget(
            name: "Judo3DS2_iOS",
            path: "Framework/Judo3DS2_iOS.xcframework")
    ])
