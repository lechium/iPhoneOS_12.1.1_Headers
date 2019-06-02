/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest {

	NSArray* _propertyKeys;

}

@property (nonatomic,copy) NSArray * propertyKeys;              //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)devicePropertyKeysForPlatform:(unsigned long long)arg1 ;
+(id)currentDevicePropertyKeys;
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
