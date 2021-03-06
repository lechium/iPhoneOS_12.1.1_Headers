/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVRenderer, NSString;

@interface JTEffectsPreviewGenerator : NSObject {

	PVRenderer* _renderer;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)trackStats:(BOOL)arg1 ;
-(id)initWithRendererOptions:(id)arg1 ;
-(void)_renderJob:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generatePreviewRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)perfLog;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

