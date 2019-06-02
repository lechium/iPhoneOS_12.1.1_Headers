/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DOCThumbnailIconKey : NSObject <NSCopying> {

	BOOL _folded;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL folded;                  //@synthesize folded=_folded - In the implementation block
-(BOOL)folded;
-(id)initWithType:(id)arg1 folded:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
@end
