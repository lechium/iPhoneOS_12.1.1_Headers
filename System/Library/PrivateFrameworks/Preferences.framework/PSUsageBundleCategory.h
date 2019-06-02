/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject {

	PSUsageBundleApp* _usageBundleApp;
	NSString* _identifier;
	NSString* _name;

}

@property (assign,nonatomic,__weak) PSUsageBundleApp * usageBundleApp;              //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3 ;
-(PSUsageBundleApp *)usageBundleApp;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
@end

