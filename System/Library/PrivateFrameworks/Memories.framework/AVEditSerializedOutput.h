/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVEditSerializedOutput : NSObject
+(id)sharedSerialOutput;
+(void)initialize;
-(id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2 ;
-(id)serializeVideoComposition:(id)arg1 ;
-(id)serializeAudioMix:(id)arg1 ;
-(void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4 ;
@end
