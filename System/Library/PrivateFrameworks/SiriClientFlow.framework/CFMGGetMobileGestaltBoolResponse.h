/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSString;

@interface CFMGGetMobileGestaltBoolResponse : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getMobileGestaltBoolResponse;
+(id)getMobileGestaltBoolResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
@end

