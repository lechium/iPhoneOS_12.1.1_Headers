/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying> {

	unsigned long long _processType;
	NSString* _bundleID;

}

@property (assign,nonatomic) unsigned long long processType;              //@synthesize processType=_processType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
-(id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2 ;
-(unsigned long long)processType;
-(void)setProcessType:(unsigned long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
@end

