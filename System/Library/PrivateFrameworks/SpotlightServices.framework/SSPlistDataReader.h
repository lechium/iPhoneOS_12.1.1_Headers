/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSMutableArray, NSArray;

@interface SSPlistDataReader : NSObject {

	MDPlistContainerRef _container;
	SCD_Struct_SS6 _obj;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSMutableArray * allKeys; 
@property (nonatomic,readonly) NSArray * blacklist; 
-(NSArray *)blacklist;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 obj:(SCD_Struct_SS7)arg2 ;
-(double)doubleValueForKey:(const char*)arg1 ;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 ;
-(BOOL)doesBundleExistInAppWhiteList:(id)arg1 ;
-(double)doubleValueForBundle:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(MDPlistContainerRef)container;
-(NSMutableArray *)allKeys;
@end

