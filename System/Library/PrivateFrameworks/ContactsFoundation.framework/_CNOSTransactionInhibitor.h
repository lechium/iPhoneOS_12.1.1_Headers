/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNInhibitor.h>

@protocol OS_os_transaction;
@class NSString, NSObject;

@interface _CNOSTransactionInhibitor : CNInhibitor {

	NSString* _label;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy,readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(NSObject*<OS_os_transaction>)transaction;
-(void)stop;
-(void)start;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
@end

