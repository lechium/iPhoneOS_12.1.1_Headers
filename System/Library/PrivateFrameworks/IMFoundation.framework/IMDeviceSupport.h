/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {

	NSString* _model;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
+(id)marketingNameForModel:(id)arg1 ;
+(id)sharedInstance;
-(NSString *)productName;
-(void)_generateProductInformation;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productBuildVersion;
-(NSString *)productVersion;
-(id)init;
-(void)dealloc;
-(NSString *)model;
@end
