/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABSCallbackInvoker : NSObject {

	void* addressBook;
	/*function pointer*/void* callback;
	void* context;

}
+(void)invokeOnThread:(id)arg1 callback:(/*function pointer*/void*)arg2 withAddressBook:(void*)arg3 context:(void*)arg4 ;
-(void)invoke;
@end

