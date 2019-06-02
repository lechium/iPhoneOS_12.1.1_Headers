/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse {

	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
+(id)builderProtocol;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)modelResponse;
@end

