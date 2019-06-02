/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying> {

	int _contentType;
	int _contentTypeVersion;
	int _contentTypeMinorVersion;
	int _contentTypePatchVersion;

}

@property (nonatomic,readonly) int contentType;                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentTypeVersion;                   //@synthesize contentTypeVersion=_contentTypeVersion - In the implementation block
@property (nonatomic,readonly) int contentTypeMinorVersion;              //@synthesize contentTypeMinorVersion=_contentTypeMinorVersion - In the implementation block
@property (nonatomic,readonly) int contentTypePatchVersion;              //@synthesize contentTypePatchVersion=_contentTypePatchVersion - In the implementation block
-(int)contentType;
-(int)contentTypeVersion;
-(int)contentTypeMinorVersion;
-(int)contentTypePatchVersion;
-(id)initWithContentType:(int)arg1 contentTypeVersion:(int)arg2 contentTypeMinorVersion:(int)arg3 contentTypePatchVersion:(int)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

