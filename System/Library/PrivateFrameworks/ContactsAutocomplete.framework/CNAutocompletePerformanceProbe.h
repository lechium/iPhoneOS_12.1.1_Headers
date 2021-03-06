/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompletePerformanceProbe <CNAutocompleteProbe>
@required
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end

