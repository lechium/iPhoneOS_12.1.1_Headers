/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKit-Structs.h>
#import <ROCKit/ROCKInvocationInterface.h>

@class NSMethodSignature, NSString;

@interface ROCKFFIStackObject : NSObject <ROCKInvocationInterface> {

	NSMethodSignature* _methodSignature;
	SCD_Struct_RO0* _cif;
	void* _returnPointer;
	void* _argumentPointers;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;                         //@synthesize methodSignature=_methodSignature - In the implementation block
@property (assign,nonatomic) SCD_Struct_RO0* cif;                                         //@synthesize cif=_cif - In the implementation block
@property (assign,nonatomic) void* returnPointer;                                         //@synthesize returnPointer=_returnPointer - In the implementation block
@property (assign,nonatomic) void* argumentPointers;                                      //@synthesize argumentPointers=_argumentPointers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id target; 
@property (assign,nonatomic) SEL selector; 
@property (nonatomic,readonly) BOOL argumentsRetained; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> invocationQueue; 
+(id)invocationWithMethodSignature:(id)arg1 cif:(SCD_Struct_RO0*)arg2 returnPointer:(void*)arg3 argumentPointers:(void*)arg4 ;
-(NSObject*<OS_dispatch_queue>)invocationQueue;
-(BOOL)argumentsRetained;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(SCD_Struct_RO0*)cif;
-(void)setArgumentPointers:(void*)arg1 ;
-(void*)argumentPointers;
-(id)initWithMethodSignature:(id)arg1 cif:(SCD_Struct_RO0*)arg2 returnPointer:(void*)arg3 argumentPointers:(void*)arg4 ;
-(void)setCif:(SCD_Struct_RO0*)arg1 ;
-(void)setReturnPointer:(void*)arg1 ;
-(void*)returnPointer;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)invoke;
-(void)getReturnValue:(void*)arg1 ;
-(void)retainArguments;
-(NSMethodSignature *)methodSignature;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeWithTarget:(id)arg1 ;
@end
