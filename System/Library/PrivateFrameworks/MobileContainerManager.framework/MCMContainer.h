/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	unsigned _userId;
	NSString* _identifier;
	NSUUID* _uuid;
	long long _containerClass;
	container_objectRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) container_objectRef thisContainer; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(long long)typeContainerClass;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)isTemporary;
-(long long)containerClass;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
-(unsigned long long)diskUsageWithError:(id*)arg1 ;
-(void)_errorOccurred;
-(id)initWithIdentifier:(id)arg1 userId:(unsigned)arg2 uuid:(id)arg3 error:(id*)arg4 ;
-(void)markDeleted;
-(container_objectRef)getLowLevelContainerObject;
-(container_objectRef)thisContainer;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)uuid;
-(NSDictionary *)info;
-(NSURL *)url;
@end

