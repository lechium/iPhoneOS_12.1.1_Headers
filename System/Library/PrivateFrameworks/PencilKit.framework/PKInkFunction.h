/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKInkFunction : NSObject {

	unsigned long long _inkProperty;
	unsigned long long _inkInput;
	unsigned long long _inputMask;
	unsigned long long _deviceMask;
	NSMutableArray* _inputPoints;
	NSMutableArray* _outputPoints;
	unsigned long long _functionType;
	NSMutableArray* _controlPoints;

}

@property (assign,nonatomic) unsigned long long inkProperty;               //@synthesize inkProperty=_inkProperty - In the implementation block
@property (assign,nonatomic) unsigned long long inkInput;                  //@synthesize inkInput=_inkInput - In the implementation block
@property (assign,nonatomic) unsigned long long inputMask;                 //@synthesize inputMask=_inputMask - In the implementation block
@property (assign,nonatomic) unsigned long long deviceMask;                //@synthesize deviceMask=_deviceMask - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputPoints;                 //@synthesize inputPoints=_inputPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputPoints;                //@synthesize outputPoints=_outputPoints - In the implementation block
@property (assign,nonatomic) unsigned long long functionType;              //@synthesize functionType=_functionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * controlPoints;               //@synthesize controlPoints=_controlPoints - In the implementation block
+(id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7 ;
-(NSMutableArray *)controlPoints;
-(unsigned long long)functionType;
-(id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7 ;
-(void)setControlPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)inkProperty;
-(void)setInkProperty:(unsigned long long)arg1 ;
-(unsigned long long)inkInput;
-(void)setInkInput:(unsigned long long)arg1 ;
-(unsigned long long)inputMask;
-(void)setInputMask:(unsigned long long)arg1 ;
-(unsigned long long)deviceMask;
-(void)setDeviceMask:(unsigned long long)arg1 ;
-(NSMutableArray *)inputPoints;
-(void)setInputPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputPoints;
-(void)setOutputPoints:(NSMutableArray *)arg1 ;
-(void)setFunctionType:(unsigned long long)arg1 ;
-(id)description;
@end

