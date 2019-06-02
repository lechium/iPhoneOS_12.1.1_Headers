/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding> {

	void* _classInfoMap1;
	void* _classInfoMap2;
	NSMutableArray* _linearClassInfos;
	void* _fieldInfoMap1;
	void* _fieldInfoMap2;
	NSMutableArray* _linearFieldInfos;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) unsigned fieldInfoCount; 
+(void)_destroyRetainedLinearArray:(id*)arg1 withCount:(unsigned)arg2 ;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(unsigned)indexForClassInfo:(id)arg1 ;
-(id*)_retainedLinearArrayWithReturnedCount:(unsigned*)arg1 ;
-(void)enumerateInfosWithBlock:(/*^block*/id)arg1 ;
-(id)classInfoForIndex:(unsigned)arg1 ;
-(void)_applyTypeOverlay:(id)arg1 ;
-(id)classInfoForAddress:(unsigned long long)arg1 ;
-(unsigned)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(unsigned)indexForFieldInfo:(id)arg1 ;
-(id)fieldInfoForIndex:(unsigned)arg1 ;
-(id)swiftFieldWithName:(const char*)arg1 offset:(unsigned)arg2 kind:(unsigned)arg3 typeref:(swift_typeref_interop)arg4 ;
-(void)memoizeSwiftField:(id)arg1 withName:(const char*)arg2 offset:(unsigned)arg3 kind:(unsigned)arg4 typeref:(swift_typeref_interop)arg5 ;
-(unsigned)addFieldInfo:(id)arg1 ;
-(void)addClassInfosFromMap:(id)arg1 ;
-(unsigned)fieldInfoCount;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

