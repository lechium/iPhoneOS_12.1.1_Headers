/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKRendererControllerProtocol;
#import <PencilKit/PencilKit-Structs.h>
@interface PKImageRenderer : NSObject {

	double _scale;
	id<PKRendererControllerProtocol> _rendererController;
	long long _cancelCount;
	CGSize _size;

}

@property (nonatomic,retain) id<PKRendererControllerProtocol> rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (assign,nonatomic) long long cancelCount;                                            //@synthesize cancelCount=_cancelCount - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                                                   //@synthesize scale=_scale - In the implementation block
+(void)_fuzzTestUnzippedData:(id)arg1 ;
-(id<PKRendererControllerProtocol>)rendererController;
-(void)setRendererController:(id<PKRendererControllerProtocol>)arg1 ;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3 renderQueue:(id)arg4 ;
-(void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3 ;
-(void)renderDrawing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)buildStrokeRenderCacheForDrawing:(id)arg1 ;
-(long long)cancelCount;
-(void)setCancelCount:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(void)cancel;
-(void)resume;
@end

