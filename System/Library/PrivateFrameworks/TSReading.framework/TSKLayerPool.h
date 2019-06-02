/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSKLayerPool : NSObject {

	NSMutableArray* mLayerPool;
	Class mLayerClass;
	id mLayerDelegate;

}

@property (assign,nonatomic) id layerDelegate; 
@property (assign,nonatomic) Class layerClass; 
-(id)layerDelegate;
-(id)requestLayerFromPool;
-(void)returnLayerToPool:(id)arg1 ;
-(void)setLayerClass:(Class)arg1 ;
-(void)setLayerDelegate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(Class)layerClass;
@end

