/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject {

	NTKFace* _face;
	long long _detailMode;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NTKFace * face;                                         //@synthesize face=_face - In the implementation block
@property (getter=isMemberOfBatch,nonatomic,readonly) BOOL memberOfBatch; 
@property (nonatomic,readonly) long long detailMode;                                   //@synthesize detailMode=_detailMode - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(NTKFace *)face;
-(id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMemberOfBatch;
-(long long)detailMode;
-(id)completionHandler;
@end

