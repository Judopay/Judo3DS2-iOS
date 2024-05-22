// swift-tools-version:5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Judo3DS2_iOS",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "Judo3DS2_iOS",
            targets: ["Judo3DS2_iOS"])
    ],
    targets: [
        .binaryTarget(
            name: "Judo3DS2_iOS",
            path: "Judo3DS2_iOS.xcframework")
    ])
