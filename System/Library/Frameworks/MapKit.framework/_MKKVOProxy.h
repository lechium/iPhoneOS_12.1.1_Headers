/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKKVOProxyDelegate;
@interface _MKKVOProxy : NSObject {

	id<_MKKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setDelegate:(id<_MKKVOProxyDelegate>)arg1 ;
-(id<_MKKVOProxyDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

