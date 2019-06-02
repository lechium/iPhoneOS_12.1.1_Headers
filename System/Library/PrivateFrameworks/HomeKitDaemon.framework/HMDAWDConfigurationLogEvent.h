/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSMutableArray, NSString;

@interface HMDAWDConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	unsigned _databaseSize;
	unsigned _metadataVersion;
	NSMutableArray* _homeConfigurations;

}

@property (assign) unsigned databaseSize;                                        //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign) unsigned metadataVersion;                                     //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign) BOOL isResidentCapable;                                       //@synthesize isResidentCapable=_isResidentCapable - In the implementation block
@property (assign) BOOL isResidentEnabled;                                       //@synthesize isResidentEnabled=_isResidentEnabled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(unsigned)databaseSize;
-(BOOL)isResidentCapable;
-(void)setMetadataVersion:(unsigned)arg1 ;
-(unsigned)metadataVersion;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)setIsResidentCapable:(BOOL)arg1 ;
-(void)setIsResidentEnabled:(BOOL)arg1 ;
-(BOOL)isResidentEnabled;
-(NSMutableArray *)homeConfigurations;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

