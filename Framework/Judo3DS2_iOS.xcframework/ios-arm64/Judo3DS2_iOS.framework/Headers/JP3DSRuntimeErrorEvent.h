//
//  JP3DSRuntimeErrorEvent.h
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

@interface JP3DSRuntimeErrorEvent : NSObject

/**
 * The error code of the runtime error event.
 */
@property (nonatomic, strong, nonnull) NSString *errorCode;

/**
 * The error message of the runtime error event.
 */
@property (nonatomic, strong, nonnull) NSString *errorMessage;

/**
 * Designated initializer that creates an instance of JP3DSRuntimeErrorEvent.
 *
 * @param errorCode - the error code of the runtime error event.
 * @param errorMessage - the error message of the runtime error event.
 *
 * @returns a configured instance of JP3DSRuntimeErrorEvent.
 */
- (nonnull instancetype)initWithErrorCode:(nonnull NSString *)errorCode
                             errorMessage:(nonnull NSString *)errorMessage;

@end
