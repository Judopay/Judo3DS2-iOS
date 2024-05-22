//
//  JP3DSWarning.h
//  Judo3DS2_iOS
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, JP3DSSeverity) {
    JP3DSSeverityLow,
    JP3DSSeverityMedium,
    JP3DSSeverityHigh
};

@interface JP3DSWarning : NSObject

/**
 * The identifier for this warning instance.
 */
@property (nonatomic, strong, nonnull) NSString *identifier;

/**
 * The descriptive message for this warning.
 */
@property (nonatomic, strong, nonnull) NSString *message;

/**
 * The severity of this warning.
 */
@property (nonatomic, assign) JP3DSSeverity severity;

/**
 * Designated initializer of a [JP3DSWarning] instance.
 *
 * @param identifier - the warning's ID value.
 * @param message - the warning's descriptive message.
 * @param severity - the warning's severity value.
 *
 * @returns a configured [JP3DSWarning] instance.
 */
- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                                   message:(nonnull NSString *)message
                               andSeverity:(JP3DSSeverity)severity;

@end
