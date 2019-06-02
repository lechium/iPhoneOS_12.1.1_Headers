/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDraggingInfo.h>

@class _UIInternalDraggingSessionDestination, NSString, _UIDraggingSession;

@interface _UIPublicDraggingSessionDestination : NSObject <_UIDraggingInfo> {

	_UIInternalDraggingSessionDestination* _internalSessionDestination;

}

@property (getter=_internalSessionDestination,nonatomic,__weak,readonly) _UIInternalDraggingSessionDestination * internalSessionDestination;              //@synthesize internalSessionDestination=_internalSessionDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
@property (assign,nonatomic) long long numberOfValidItemsForDrop; 
@property (nonatomic,readonly) _UIDraggingSession * localDraggingSession; 
-(id)init;
-(id)progress;
-(_UIDraggingSession *)localDraggingSession;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMask;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1 ;
-(id)_internalSessionDestination;
-(id)initWithInternalSessionDestination:(id)arg1 ;
@end

