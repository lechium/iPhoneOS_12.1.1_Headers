/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/CRKIPAddressMonitorDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@protocol CRKHostResourcesOperationDelegate;
@class NSArray, NSDictionary, NSMutableDictionary, NSNetService, NSMutableSet, CRKIPAddressMonitor, NSError, NSString;

@interface CRKHostResourcesOperation : CATOperation <CRKIPAddressMonitorDelegate, NSNetServiceDelegate, CATRemoteConnectionDelegate> {

	id mServerIdentity;
	NSArray* mTrustedCertificates;
	NSDictionary* mFileURLsByFilePath;
	unsigned long long mMaximumDownloadCount;
	unsigned short mPort;
	NSMutableDictionary* mStartedDownloadCountByFileURL;
	NSMutableDictionary* mFinishedDownloadCountByFileURL;
	NSNetService* mNetService;
	NSMutableSet* mConnections;
	CRKIPAddressMonitor* mAddressMonitor;
	BOOL mPublished;
	NSMutableSet* mConnectionCloseTimers;
	NSError* mStashedError;
	NSMutableDictionary* mZipOperationsByDirectoryURL;
	id<CRKHostResourcesOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CRKHostResourcesOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)connectionDidClose:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2 ;
-(void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)ipAddressMonitorIPAddressDidChange:(id)arg1 ;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 ;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 port:(unsigned short)arg5 ;
-(void)operationDidFinish;
-(void)delegateResourcesDidPublish;
-(id)hostingSocketOptions;
-(BOOL)downloadAllowedForFileURL:(id)arg1 ;
-(void)delegateDownloadStarted:(id)arg1 fileURL:(id)arg2 ;
-(void)incrementStartedDownloadCountForFileURL:(id)arg1 ;
-(void)serveItemAtURL:(id)arg1 toConnection:(id)arg2 forRequestURL:(id)arg3 originalItemURL:(id)arg4 ;
-(void)zipDirectoryAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)zipOperationDidFail:(id)arg1 directoryURL:(id)arg2 ;
-(void)delegateDownloadFinished:(id)arg1 fileURL:(id)arg2 error:(id)arg3 ;
-(void)incrementFinishedDownloadCountForFileURL:(id)arg1 ;
-(void)connectionCloseDidTimeout:(id)arg1 ;
-(BOOL)allDownloadsFinished;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 ;
-(void)setDelegate:(id<CRKHostResourcesOperationDelegate>)arg1 ;
-(id<CRKHostResourcesOperationDelegate>)delegate;
-(void)cancel;
-(void)main;
-(void)run;
@end

