/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest {

	NSArray* _settings;
	BOOL _applyChanges;

}

@property (setter=_setSettings:,nonatomic,copy) NSArray * settings;                   //@synthesize settings=_settings - In the implementation block
@property (assign,setter=_setApplyChanges:,nonatomic) BOOL applyChanges;              //@synthesize applyChanges=_applyChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg1 ;
-(void)_setSettings:(id)arg1 ;
-(BOOL)applyChanges;
-(void)_setApplyChanges:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)settings;
@end

