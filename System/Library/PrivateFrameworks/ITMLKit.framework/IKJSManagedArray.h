/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IKJSManagedArray : NSObject {

	id _ownerObject;
	NSArray* _managedArray;

}

@property (nonatomic,retain) id ownerObject;                      //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain) NSArray * managedArray;              //@synthesize managedArray=_managedArray - In the implementation block
-(NSArray *)managedArray;
-(id)ownerObject;
-(void)setManagedArray:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ownerObject:(id)arg2 ;
-(id)jsValuesWithContext:(id)arg1 ;
-(void)setOwnerObject:(id)arg1 ;
-(void)dealloc;
@end

