/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface URLTarget : NSObject {

	unsigned _applicationState;
	NSString* _bundleId;
	long long _defaultIndex;
	NSString* _normalScheme;
	NSString* _secureScheme;

}

@property (assign,nonatomic) unsigned applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) long long defaultIndex;                 //@synthesize defaultIndex=_defaultIndex - In the implementation block
@property (nonatomic,retain) NSString * normalScheme;                //@synthesize normalScheme=_normalScheme - In the implementation block
@property (nonatomic,retain) NSString * secureScheme;                //@synthesize secureScheme=_secureScheme - In the implementation block
+(id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(void)setApplicationState:(unsigned)arg1 ;
-(id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(long long)defaultIndex;
-(void)setDefaultIndex:(long long)arg1 ;
-(NSString *)normalScheme;
-(void)setNormalScheme:(NSString *)arg1 ;
-(NSString *)secureScheme;
-(void)setSecureScheme:(NSString *)arg1 ;
-(unsigned)applicationState;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
@end

