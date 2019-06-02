/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVFace;

@interface PVFacePair : NSObject {

	PVFace* _face1;
	PVFace* _face2;
	double _score;

}

@property (nonatomic,readonly) PVFace * face1;              //@synthesize face1=_face1 - In the implementation block
@property (nonatomic,readonly) PVFace * face2;              //@synthesize face2=_face2 - In the implementation block
@property (nonatomic,readonly) double score;                //@synthesize score=_score - In the implementation block
-(double)score;
-(id)initWithFace:(id)arg1 andFace:(id)arg2 andScore:(double)arg3 ;
-(PVFace *)face1;
-(PVFace *)face2;
@end
