/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardParameterLine <CNVCardLine>
@required
-(void)addParameterWithName:(id)arg1 value:(id)arg2;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
-(BOOL)canSerializeWithStrategy:(id)arg1;
-(void)serializeValueWithStrategy:(id)arg1;

@end
