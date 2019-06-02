/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _ssid;
	NSString* _macAddress;
	unsigned long long _properties;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;               //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy,readonly) NSString * macAddress;                 //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(NSString *)manufacturer;
-(NSString *)macAddress;
-(id)initWithAirPortAssistantWACDevice:(id)arg1 ;
-(NSString *)ssid;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)model;
-(unsigned long long)properties;
@end

