/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying> {

	RetainPtr<NSURL>* _linkURL;

}

@property (nonatomic,readonly) NSURL * linkURL; 
-(id)_initWithLinkURL:(id)arg1 ;
-(NSURL *)linkURL;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
