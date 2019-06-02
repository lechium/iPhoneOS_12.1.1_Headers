/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InstallCoordination/InstallCoordination-Structs.h>
@class NSURL;

@interface IXGlobalConfiguration : NSObject {

	os_unfair_lock_s _dynamicPropertyLock;
	NSURL* _systemContainerPath;
	NSURL* _mobileHome;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * mobileHome;                       //@synthesize mobileHome=_mobileHome - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                         //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSURL * systemContainerPath;              //@synthesize systemContainerPath=_systemContainerPath - In the implementation block
@property (nonatomic,readonly) NSURL * oldSupportDirectory; 
@property (nonatomic,readonly) NSURL * frameworkURL; 
@property (nonatomic,readonly) NSURL * userVolumeURL; 
+(id)sharedInstance;
-(NSURL *)oldSupportDirectory;
-(id)_systemContainerURLWithError:(id*)arg1 ;
-(id)dataDirectoryWithError:(id*)arg1 ;
-(id)promiseStagingRootDirectoryWithError:(id*)arg1 ;
-(NSURL *)mobileHome;
-(BOOL)createDirectories;
-(id)dataDirectoryAbortingOnError;
-(id)promiseStagingRootDirectoryAbortingOnError;
-(NSURL *)frameworkURL;
-(NSURL *)userVolumeURL;
-(NSURL *)systemContainerPath;
-(NSURL *)rootPath;
-(id)init;
@end

