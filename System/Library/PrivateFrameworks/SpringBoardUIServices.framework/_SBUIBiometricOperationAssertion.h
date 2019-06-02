/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSSimpleAssertion.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding> {

	NSSet* _operations;

}

@property (nonatomic,copy) NSSet * operations;                      //@synthesize operations=_operations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)description;
-(void)setOperations:(NSSet *)arg1 ;
-(NSSet *)operations;
@end

