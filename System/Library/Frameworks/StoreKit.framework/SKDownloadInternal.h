/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSError, NSURL, SKPaymentTransaction;

@interface SKDownloadInternal : NSObject {

	NSNumber* _downloadID;
	NSString* _productID;
	long long _state;
	float _progress;
	NSError* _error;
	NSURL* _contentURL;
	double _timeRemaining;
	NSNumber* _contentLength;
	NSString* _contentVersion;
	SKPaymentTransaction* _transaction;

}
@end

