/*
 * Copyright (c) 2011, The Iconfactory. All rights reserved.
 *
 * Copyright (c) 2015 Microsoft Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of The Iconfactory nor the names of its contributors may
 *    be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE ICONFACTORY BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _UIPASTEBOARD_H_
#define _UIPASTEBOARD_H_

#import <Foundation/Foundation.h>

UIKIT_EXPORT NSArray* UIPasteboardTypeListString;
UIKIT_EXPORT NSArray* UIPasteboardTypeListURL;
UIKIT_EXPORT NSArray* UIPasteboardTypeListImage;
UIKIT_EXPORT NSArray* UIPasteboardTypeListColor;

@class UIImage, UIColor, NSPasteboard;

UIKIT_EXPORT_CLASS
@interface UIPasteboard : NSObject

+ (UIPasteboard*)generalPasteboard;
+ (UIPasteboard*)pasteboardWithName:(NSString*)pasteboardName create:(BOOL)create;
+ (UIPasteboard*)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(NSString*)pasteboardName;

@property (nonatomic, copy) NSURL* URL;
@property (nonatomic, copy) NSArray* URLs;
@property (nonatomic, copy) NSString* string;
@property (nonatomic, copy) NSArray* strings;
@property (nonatomic, copy) UIImage* image;
@property (nonatomic, copy) NSArray* images;
@property (nonatomic, copy) UIColor* color;
@property (nonatomic, copy) NSArray* colors;
@property (nonatomic, copy) NSArray* items;
@property (getter=isPersistent, nonatomic) BOOL persistent;
@property (readonly, nonatomic) NSString* name;

- (void)addItems:(NSArray*)items;
- (void)setData:(NSData*)data forPasteboardType:(NSString*)pasteboardType;
- (void)setValue:(id)value forPasteboardType:(NSString*)pasteboardType;
- (NSData*)dataForPasteboardType:(NSString*)pasteboardType;
- (id)valueForPasteboardType:(NSString*)pasteboardType;
- (BOOL)containsPasteboardTypes:(NSArray*)pasteboardTypes;

@end

#endif /* _UIPASTEBOARD_H_ */