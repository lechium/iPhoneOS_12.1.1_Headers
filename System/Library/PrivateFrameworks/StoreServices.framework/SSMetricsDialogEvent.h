/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary, NSArray;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * actionURL; 
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSString * dialogId; 
@property (nonatomic,copy) NSString * dialogType; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * targetId; 
@property (nonatomic,copy) NSArray * userActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)details;
-(NSString *)actionURL;
-(NSString *)dialogId;
-(NSString *)targetId;
-(NSArray *)userActions;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setDialogId:(NSString *)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setUserActions:(NSArray *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)dialogType;
-(void)setResult:(NSString *)arg1 ;
-(id)init;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)result;
@end

