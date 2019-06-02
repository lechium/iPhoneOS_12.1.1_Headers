/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {

	unsigned long long _layerID;
	RemoteLayerTreeHost* _layerTreeHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(RemoteLayerTreeHost*)arg2 ;
-(void)invalidate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
@end

