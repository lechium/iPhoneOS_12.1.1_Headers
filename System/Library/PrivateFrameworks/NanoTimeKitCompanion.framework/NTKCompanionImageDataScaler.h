/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSData;

@interface NTKCompanionImageDataScaler : NSObject {

	NSData* _outputData;
	NSData* _data;
	long long _orientation;
	CGSize _inputSize;
	CGSize _outputSize;
	CGRect _inputCrop;

}

@property (nonatomic,readonly) CGSize inputSize;                   //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,readonly) CGRect inputCrop;                   //@synthesize inputCrop=_inputCrop - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                  //@synthesize outputSize=_outputSize - In the implementation block
-(CGSize)inputSize;
-(CGSize)outputSize;
-(id)initWithSize:(CGSize)arg1 crop:(CGRect)arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(CGSize)arg5 ;
-(void)cropAndScaleWithCompletion:(/*^block*/id)arg1 ;
-(CGRect)inputCrop;
-(long long)orientation;
-(NSData *)data;
@end

