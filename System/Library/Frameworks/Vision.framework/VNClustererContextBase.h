/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface VNClustererContextBase : NSObject {

	NSString* _type;
	NSNumber* _threshold;
	NSNumber* _torsoThreshold;
	NSString* _cacheDirectoryPath;
	BOOL _readOnly;

}
-(BOOL)checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 error:(id*)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 error:(id*)arg6 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 error:(id*)arg7 ;
-(BOOL)_createGreedyClustererWith:(id)arg1 error:(id*)arg2 ;
-(id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id*)arg3 ;
@end

