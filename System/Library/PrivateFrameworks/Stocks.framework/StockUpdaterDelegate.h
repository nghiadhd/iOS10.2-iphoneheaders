/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StockUpdaterDelegate <NSObject>
@required
-(void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(BOOL)arg3;
-(void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3;
-(void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4;

@end

