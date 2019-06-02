/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {

	AVKeyPathDependencyManager* _dependencyManager;
	AVTwoPartKeyPath* _dependencyKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) id dependentProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2 ;
-(id)topLevelDependencyProperty;
-(id)dependentProperty;
-(id)observedObject;
-(id)init;
-(void)dealloc;
@end

