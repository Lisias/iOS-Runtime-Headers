/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject  {
    unsigned long long ID;
    NSString *headline;
    NSString *summary;
    NSString *source;
    NSDate *date;
    NSURL *link;
    NSString *localizedDateString;
}

@property unsigned long long ID;
@property(retain) NSString * headline;
@property(retain) NSString * summary;
@property(retain) NSString * source;
@property(retain) NSDate * date;
@property(retain) NSURL * link;
@property(readonly) NSString * localizedDateString;

+ (id)localizedStringForDate:(id)arg1;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSource:(id)arg1;
- (id)source;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setID:(unsigned long long)arg1;
- (unsigned long long)ID;
- (void)resetLocale;
- (id)archiveDictionary;
- (void)setSummary:(id)arg1;
- (id)summary;
- (void)setLink:(id)arg1;
- (id)link;
- (id)localizedDateString;
- (int)chronologicalComparisonWithNewsItem:(id)arg1;
- (id)initWithArchiveDictionary:(id)arg1;
- (id)headline;
- (void)setHeadline:(id)arg1;

@end