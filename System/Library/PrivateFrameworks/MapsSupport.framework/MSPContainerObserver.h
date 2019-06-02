/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPContainerObserver <NSObject>
@optional
-(id)observationQueueForContainer:(id)arg1;
-(void)containerWillEraseContents:(id)arg1;
-(void)containerWillEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;

@required
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;

@end
