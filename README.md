# tamrin-1

 


 این کد یک برنامه برای میکروکنترلر Arduino است که یک LED را روشن و خاموش می‌کند. در اینجا توضیح هر بخش از کد آمده است:

تعریف متغیر:

int Led=13; content_copy 

این خط یک متغیر به نام Led تعریف می‌کند و آن را به شماره پین 13 اختصاص می‌دهد. این پین به LED متصل است.

تابع setup:تابع setup:

void setup() { pinMode(Led,OUTPUT); } content_copy 

این تابع یک بار در ابتدای برنامه اجرا می‌شود. در اینجا، پین 13 به عنوان خروجی تنظیم می‌شود تا بتواند LED را کنترل کند.

تابع loop:تابع loop:

Void loop() { digitalWrite(Led,HIGH); delay(3000); digitalWrite(Led,LOW); delay(1000); } content_copy 

این تابع به صورت مداوم اجرا می‌شود. در اینجا:

digitalWrite(Led,HIGH); LED را روشن می‌کند.

delay(3000); برنامه را به مدت 3000 میلی‌ثانیه (3 ثانیه) متوقف می‌کند.

digitalWrite(Led,LOW); LED را خاموش می‌کند.

delay(1000); برنامه را به مدت 1000 میلی‌ثانیه (1 ثانیه) متوقف می‌کند.

این چرخه به طور مداوم تکرار می‌شود و باعث می‌شود LED به مدت 3 ثانیه روشن و سپس به مدت 1 ثانیه خاموش بماند.

همچنین، توجه داشته باشید که در خط تعریف تابع loop، کلمه کلیدی Void باید به صورت void نوشته شود تا کد به درستی کامپایل شود.
 :
