/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _ATXDataStore, ATXBackgroundSaver;

@interface ATXHistogramTable : NSObject <NSSecureCoding> {

	HTGuardedData _private_unsafeGuardedData;
	unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >* _guardedData;
	_ATXDataStore* _datastore;
	ATXBackgroundSaver* _saver;
	long long _blobType;

}
+(BOOL)supportsSecureCoding;
-(id)initWithDatastore:(id)arg1 blobType:(long long)arg2 ;
-(id)initWithDict:(id)arg1 usedIds:(id)arg2 datastore:(id)arg3 blobType:(long long)arg4 ;
-(unsigned short)intern:(id)arg1 ;
-(BOOL)lookup:(id)arg1 into:(unsigned short*)arg2 ;
-(id)allKeysFilteredBy:(/*^block*/id)arg1 ;
-(id)histogramTableDict;
-(unsigned short)remove:(id)arg1 ;
-(id)initWithDatastore:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allKeys;
-(void)clear;
-(void)flush;
@end

