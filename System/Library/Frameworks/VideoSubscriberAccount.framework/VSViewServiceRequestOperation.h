/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/VSViewServiceHostViewControllerDelegate.h>

@protocol VSViewServiceRequestOperationDelegate;
@class VSViewServiceRequest, VSOptional, VSViewServiceHostViewController, NSUUID, NSString;

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate> {

	BOOL _isPresentingViewController;
	VSViewServiceRequest* _viewServiceRequest;
	id<VSViewServiceRequestOperationDelegate> _delegate;
	VSOptional* _result;
	VSViewServiceHostViewController* _viewServiceHostViewController;
	NSUUID* _requestID;

}

@property (nonatomic,retain) VSOptional * result;                                                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSViewServiceHostViewController * viewServiceHostViewController;              //@synthesize viewServiceHostViewController=_viewServiceHostViewController - In the implementation block
@property (nonatomic,copy) NSUUID * requestID;                                                             //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) VSViewServiceRequest * viewServiceRequest;                             //@synthesize viewServiceRequest=_viewServiceRequest - In the implementation block
@property (assign,nonatomic,__weak) id<VSViewServiceRequestOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VSViewServiceHostViewController *)viewServiceHostViewController;
-(void)_dismissViewControllerIfRequired;
-(VSViewServiceRequest *)viewServiceRequest;
-(void)setViewServiceHostViewController:(VSViewServiceHostViewController *)arg1 ;
-(id)initWithViewServiceRequest:(id)arg1 ;
-(void)setRequestID:(NSUUID *)arg1 ;
-(NSUUID *)requestID;
-(void)_presentViewController;
-(void)setResult:(VSOptional *)arg1 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2 ;
-(void)presentViewServiceHostViewController:(id)arg1 ;
-(void)dismissViewServiceHostViewController:(id)arg1 ;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<VSViewServiceRequestOperationDelegate>)arg1 ;
-(id<VSViewServiceRequestOperationDelegate>)delegate;
-(void)cancel;
-(void)_dismissViewController;
-(VSOptional *)result;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end

