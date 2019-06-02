/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSDictionary;

@interface ICDocCamImageSequenceFrame : NSObject {

	CVBufferRef _pb;
	NSDictionary* _frameOptions;

}

@property (assign,nonatomic) CVBufferRef pb;                         //@synthesize pb=_pb - In the implementation block
@property (nonatomic,copy) NSDictionary * frameOptions;              //@synthesize frameOptions=_frameOptions - In the implementation block
-(CVBufferRef)pb;
-(void)setPb:(CVBufferRef)arg1 ;
-(NSDictionary *)frameOptions;
-(void)setFrameOptions:(NSDictionary *)arg1 ;
@end

